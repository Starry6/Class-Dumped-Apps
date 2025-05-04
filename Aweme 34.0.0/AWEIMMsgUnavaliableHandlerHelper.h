@interface AWEIMMsgUnavaliableHandlerHelper : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)createPlayletUnavaliableHandlerWithComponentCenter:;
- (id)createShareMixVideoUnavaliableHandlerWithComponentCenter:;
- (id)createPOIUpdateHandlerWithComponentCenter:;
- (id)createShareH5GoodsUpdateHandlerWithComponentCenter:;
+ (id)sharedInstance;
@end
