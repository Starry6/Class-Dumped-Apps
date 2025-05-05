@interface ASCOfferPresenterViewState : NSObject
@property (nonatomic) ASCOfferMetadata metadata;
@property (nonatomic) ASCOfferTheme theme;
- (id)theme;
- (id)metadata;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithMetadata:theme:;
@end
