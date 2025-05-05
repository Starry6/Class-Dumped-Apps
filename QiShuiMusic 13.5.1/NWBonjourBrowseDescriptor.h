@interface NWBonjourBrowseDescriptor : NWBrowseDescriptor
@property (nonatomic) NSString type;
@property (nonatomic) NSString domain;
- (id)descriptionWithIndent:showFullContent:;
- (id)type;
- (id)domain;
+ (unsigned int)descriptorType;
+ (id)descriptorWithType:domain:;
@end
