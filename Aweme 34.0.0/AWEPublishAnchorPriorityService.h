@interface AWEPublishAnchorPriorityService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canReplaceWithOriginAnchorType:newAnchorType:publishModel:;
- (id)priorityList;
- (BOOL)existPoiInfo:;
@end
