@interface WBSRecentlyUsedAutoFillSet : NSObject
@property (nonatomic) NSArray fillMatches;
@property (nonatomic) NSArray skipMatches;
@property (nonatomic) NSString label;
- (id)label;
- (void).cxx_destruct;
- (id)initWithFillMatches:skipMatches:label:;
- (id)fillMatches;
- (id)skipMatches;
@end
