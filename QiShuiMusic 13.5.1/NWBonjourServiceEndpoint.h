@interface NWBonjourServiceEndpoint : NWEndpoint
@property (nonatomic) NSString name;
@property (nonatomic) NSString type;
@property (nonatomic) NSString domain;
- (id)descriptionWithIndent:showFullContent:;
- (id)type;
- (id)name;
- (id)domain;
+ (unsigned int)endpointType;
+ (id)endpointWithName:type:domain:;
@end
