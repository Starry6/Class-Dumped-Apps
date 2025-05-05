@interface IESLiveNewDressProfileSkinLoadProcessor : NSObject
@property (nonatomic) <IESLiveNewDressResourceLoadDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isAvaliableResourceWithAssetID:;
- (void)downloadEffectWithAssetIDs:dress:;
- (BOOL)loadDressResource:error:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
+ (int)dressType;
@end
