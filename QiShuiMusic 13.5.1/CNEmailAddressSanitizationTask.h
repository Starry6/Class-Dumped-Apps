@interface CNEmailAddressSanitizationTask : CNTask
- (id)run:;
- (void).cxx_destruct;
- (id)initWithAddress:;
- (id)description;
- (void)removeMailtoPrefix;
@end
