@interface WFWorkflowRunResult : NSObject
@property (nonatomic) NSError error;
@property (nonatomic) BOOL cancelled;
- (id)initWithError:;
- (BOOL)isCancelled;
- (id)error;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)resultBySettingError:;
+ (BOOL)supportsSecureCoding;
@end
