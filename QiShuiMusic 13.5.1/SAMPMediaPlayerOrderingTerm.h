@interface SAMPMediaPlayerOrderingTerm : AceObject
@property (nonatomic) NSString mediaPlayerOrderingDirection;
@property (nonatomic) NSInteger mediaPlayerSearchProperty;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)mediaPlayerOrderingDirection;
- (void)setMediaPlayerOrderingDirection:;
- (int)mediaPlayerSearchProperty;
- (void)setMediaPlayerSearchProperty:;
+ (id)mediaPlayerOrderingTerm;
+ (id)mediaPlayerOrderingTermWithDictionary:context:;
@end
