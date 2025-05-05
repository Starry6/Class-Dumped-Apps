@interface MSMMCSProtocol : NSObject
@property (nonatomic) NSString personID;
@property (nonatomic) ^{_mmcs_engine=} engine;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)abort;
- (id)engine;
- (void)dealloc;
- (id)personID;
- (void)deactivate;
- (void).cxx_destruct;
- (void)didFinishUsingAssets:;
- (void)deactivateRemoveAllFiles:;
- (id)initWithPersonID:path:;
- (int)_getFileDescriptorFromItem:;
- (id)_getUTIFromItem:;
- (void)_getItemDone:path:error:;
- (void)_putItemDone:putReceipt:error:;
- (void)_requestCompleted;
+ (id)computeItemIDForAsset:;
@end
