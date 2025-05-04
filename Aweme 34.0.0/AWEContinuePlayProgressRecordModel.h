@interface AWEContinuePlayProgressRecordModel : MTLModel
@property (nonatomic) double playProgress;
@property (nonatomic) double lastModifiedTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)playProgress;
- (void)setLastModifiedTime:;
- (void)setPlayProgress:;
- (double)lastModifiedTime;
@end
