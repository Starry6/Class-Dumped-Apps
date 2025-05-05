@interface PLPhotosHighlightTitleGenerator : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)titleForHighlight:filter:dateRangeTitleGenerator:;
+ (BOOL)canUseSharingComposition:forPhotosHighlightFilter:;
@end
