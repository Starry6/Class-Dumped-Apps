@interface AWECollectionFolderManager : NSObject
@property (nonatomic) BOOL blockUpdateFolderPrivacyState;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setBlockUpdateFolderPrivacyState:;
- (BOOL)blockUpdateFolderPrivacyState;
+ (void)followCollectionFolderWithParams:completion:;
+ (id)getItemsIDWithAwemeArray:;
+ (id)addURLString:withItemId:;
+ (id)maintainCollectionFolderWithParams:maintainOption:completion:;
+ (void)fetchFolderInfoWithParams:completion:;
+ (void)upLoadCollectionFolderEnterEventWithParam:;
+ (Class)collectionDetailViewControllerClass;
+ (BOOL)enableCollectionFolderOptimize;
+ (id)sharedInstance;
@end
