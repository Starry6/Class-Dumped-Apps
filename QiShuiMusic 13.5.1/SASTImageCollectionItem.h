@interface SASTImageCollectionItem : AceObject
@property (nonatomic) NSArray images;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)images;
- (id)encodedClassName;
- (void)setImages:;
+ (id)imageCollectionItem;
+ (id)imageCollectionItemWithDictionary:context:;
@end
