@interface FLEXColorPreviewSection : FLEXSingleRowSection
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canSelectRow:;
- (id)filterMatcher;
+ (id)forObject:;
@end
