@interface TSBonjourNode : NSObject
@property (nonatomic) NSDictionary interfaces;
@property (nonatomic) NSString name;
@property (nonatomic) NSString type;
@property (nonatomic) NSString domain;
- (id)init;
- (void)setInterfaces:;
- (id)type;
- (id)interfaces;
- (void).cxx_destruct;
- (id)name;
- (id)domain;
- (id)initWithServiceName:type:andDomain:;
- (void)addedOnInterface:named:;
- (void)removedFromInterface:named:;
@end
