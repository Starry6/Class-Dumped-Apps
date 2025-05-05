@interface PCSAnalytics : SFAnalytics
- (id)dateOfLastSuccessForEvent:;
- (void)logRecoverableError:forEvent:withAttributes:;
- (void)noteEvent:;
- (void)logSuccessForEvent:;
- (void)logUnrecoverableError:forEvent:withAttributes:;
+ (id)databasePath;
+ (id)logger;
@end
