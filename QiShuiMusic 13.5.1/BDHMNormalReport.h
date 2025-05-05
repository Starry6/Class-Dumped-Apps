@interface BDHMNormalReport : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)reportWithData:service:;
+ (id)shareInstance;
@end
