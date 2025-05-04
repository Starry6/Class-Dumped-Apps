@interface AWEFeatureFilmTagComponent : NSObject
@property (nonatomic) UILabel featureFilmLabel;
@property (nonatomic) AWEPlayInteractionBaseElement clickDelegate;
@property (nonatomic) NSArray currentActivatedComponents;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)tagWidth;
- (id)clickDelegate;
- (void)setClickDelegate:;
- (id)currentActivatedComponents;
- (void)setCurrentActivatedComponents:;
- (id)featureFilmLabel;
- (void)setFeatureFilmLabel:;
- (void).cxx_destruct;
- (void)updateWithModel:;
- (id)tagView;
+ (BOOL)needShowWithContext:;
+ (id)attributedStringWithFeatureFilmLabel:;
@end
