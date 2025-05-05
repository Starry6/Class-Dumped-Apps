@interface FFFeatureSetIdentifier : NSObject
@property (nonatomic) NSString featureGroupName;
@property (nonatomic) NSString featureSetName;
- (unsigned long long)hash;
- (id)featureGroupName;
- (id)featureSetName;
- (void).cxx_destruct;
- (id)initWithGroup:set:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)identifierFromString:;
@end
