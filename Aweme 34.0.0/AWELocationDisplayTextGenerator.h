@interface AWELocationDisplayTextGenerator : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)detailLocationDisplayTextWithCountryCode:country:province:city:district:;
- (id)locationDisplayTextWithCountryCode:country:province:city:district:location:;
- (void)appendLocationSegment:toDisplayText:;
- (id)locationDisplayTextWithCountryCode:country:province:city:district:;
@end
