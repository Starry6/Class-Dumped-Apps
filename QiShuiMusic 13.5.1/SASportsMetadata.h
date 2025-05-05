@interface SASportsMetadata : AceObject
@property (nonatomic) NSNumber average;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString name;
@property (nonatomic) NSNumber selected;
@property (nonatomic) NSString value;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)selected;
- (void)setName:;
- (id)groupIdentifier;
- (id)identifier;
- (void)setSelected:;
- (void)setValue:;
- (id)encodedClassName;
- (id)value;
- (id)name;
- (void)setIdentifier:;
- (id)average;
- (void)setAverage:;
+ (id)metadata;
+ (id)metadataWithDictionary:context:;
@end
