@interface IMSWHighlightCenterController : NSObject
@property (nonatomic) SWHighlightCenter highlightCenter;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)initWithAppIdentifier:;
- (id)fetchAttributionsForHighlight:;
- (id)collaborationHighlightForURL:error:;
- (void)highlightCenterHighlightsDidChange:;
- (void).cxx_destruct;
- (id)highlightCenter;
+ (id)sharedController;
+ (id)sharedControllerWithAppIdentifier:;
@end
