@interface BDHMLogTypeReport : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getLogTypeWithServiceName:;
- (void)reportWithData:service:;
+ (id)shareInstance;
@end
