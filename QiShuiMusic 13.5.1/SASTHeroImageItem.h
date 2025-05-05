@interface SASTHeroImageItem : AceObject
@property (nonatomic) SADecoratedString caption;
@property (nonatomic) NSString position;
@property (nonatomic) SAUINanoImageResource watchImageResource;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setPosition:;
- (id)position;
- (id)groupIdentifier;
- (id)caption;
- (void)setCaption:;
- (id)encodedClassName;
- (id)watchImageResource;
- (void)setWatchImageResource:;
+ (id)heroImageItem;
+ (id)heroImageItemWithDictionary:context:;
@end
