@interface QLRemoteItemTransformer : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)transformedContentsFromURL:context:error:;
- (id)transformedContentsFromSpotlightSearchableItemInfo:context:error:;
+ (id)allowedOutputClasses;
@end
