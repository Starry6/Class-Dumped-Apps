@interface AWEIMSecurityGlobalToastStore : NSObject
@property (nonatomic) Q limit;
@property (nonatomic) NSString bizType;
- (id)bizType;
- (void)setBizType:;
- (id)completeStoreContentForDialog:;
- (id)uncompleteInfoForDialog:;
- (void)addUncompleteInfoForDialog:completeInfo:;
- (id)fetchDialog;
- (void)removeUncompleteInfoForDialog:;
- (void)storeCompleteDialog:content:;
- (long long)showCountForDialog:;
- (id)fetchFloaterDialog;
- (void)updateShowCountForDialog:;
- (id)__unCompleteStoreKey;
- (id)__completeStoreKey;
- (id)__completeStoreItemKeyForToastCode:bizID:;
- (unsigned long long)limit;
- (void)setLimit:;
- (void).cxx_destruct;
@end
