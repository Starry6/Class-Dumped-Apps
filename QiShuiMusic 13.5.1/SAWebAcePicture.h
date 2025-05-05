@interface SAWebAcePicture : AceObject
@property (nonatomic) NSString format;
@property (nonatomic) NSNumber height;
@property (nonatomic) NSNumber width;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setFormat:;
- (id)groupIdentifier;
- (id)format;
- (void)setWidth:;
- (id)height;
- (id)width;
- (id)encodedClassName;
- (void)setHeight:;
+ (id)acePicture;
+ (id)acePictureWithDictionary:context:;
@end
