@interface CNMutableInstantMessageAddress : CNInstantMessageAddress
@property (nonatomic) NSString username;
@property (nonatomic) NSString service;
- (id)freeze;
- (id)copyWithZone:;
@end
