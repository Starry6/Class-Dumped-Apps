@interface PLHighlightHierarchy : NSObject
@property (nonatomic) NSMutableSet moments;
@property (nonatomic) NSMutableSet dayHighlights;
@property (nonatomic) NSMutableSet dayGroupHighlights;
- (id)moments;
- (id)init;
- (id)dayHighlights;
- (void)addDayHighlight:;
- (void)_addDayHighlight:;
- (void)addDayGroupHighlight:;
- (id)dayGroupHighlights;
- (void).cxx_destruct;
- (void)_addMoment:;
- (void)addMoment:;
@end
