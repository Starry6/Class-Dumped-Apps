@interface AWEPOIBizEnterIdCacheModel : NSObject
@property (nonatomic) NSString targetParamKey;
@property (nonatomic) NSDictionary bcmItem;
@property (nonatomic) BOOL isFrozen;
- (id)initWithTargetParamKey:bcmItem:;
- (id)targetParamKey;
- (void)setTargetParamKey:;
- (id)bcmItem;
- (void)setBcmItem:;
- (BOOL)isFrozen;
- (void).cxx_destruct;
- (void)setIsFrozen:;
@end
