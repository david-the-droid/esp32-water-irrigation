TESTS := driver_tests

tests:
	set -e; \
	for dir in $(TESTS); do \
		$(MAKE) -C $$dir; \
	done

# $ make runtests | grep failed
runtests:
	set -e; \
	for dir in $(PASSING_TESTS); do \
		echo '==== Running:' $$dir; \
		$(MAKE) -C $$dir run; \
	done