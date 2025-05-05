@interface GEOEnclosingPlace : NSObject
@property (nonatomic) GEOMapItemIdentifier parentIdentifier;
@property (nonatomic) <GEOServerFormattedString> containmentTextTemplate;
- (id)parentIdentifier;
- (void).cxx_destruct;
- (id)initWithContainmentPlace:;
- (id)containmentTextTemplate;
@end
