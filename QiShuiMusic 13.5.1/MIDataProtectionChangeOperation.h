@interface MIDataProtectionChangeOperation : NSObject
@property (nonatomic) NSArray urls;
@property (nonatomic) NSInteger newClass;
@property (nonatomic) Q operationType;
@property (nonatomic) @? completionBlock;
- (unsigned long long)operationType;
- (id)urls;
- (void)setCompletionBlock:;
- (void).cxx_destruct;
- (id)completionBlock;
- (id)initWithURLs:newClass:changeType:;
- (BOOL)_runChangeOperationWasLocked:withError:;
- (void)performChangeOperation;
- (int)newClass;
+ (id)dataProtectionChangeOperationForURLs:settingClass:changeType:;
+ (id)dataProtectionChangeOperationForURL:settingClass:changeType:;
@end
