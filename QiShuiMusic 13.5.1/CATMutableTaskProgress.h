@interface CATMutableTaskProgress : CATTaskProgress
@property (nonatomic) Q phase;
@property (nonatomic) @ resultObject;
@property (nonatomic) NSError error;
@property (nonatomic) NSDictionary userInfo;
@property (nonatomic) BOOL isCancelable;
@property (nonatomic) BOOL isCanceled;
@property (nonatomic) q completedUnitCount;
@property (nonatomic) q totalUnitCount;
- (void)setResultObject:;
- (void)setProgress:;
- (id)initWithCoder:;
- (id)initWithOperationUUID:requestClass:;
- (id)initWithOperationUUID:;
@end
