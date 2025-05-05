@interface IMMomentSharePresentationCache : NSObject
@property (nonatomic) <IMMomentSharePresentationCacheDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)setDelegate:;
- (void)observable:didChange:context:;
- (id)delegate;
- (void).cxx_destruct;
- (void)_momentShareCacheDidChange:;
- (id)initWithMomentShareCache:;
- (id)statusPresentationForMomentShareURLString:;
- (void)registerMomentShareItemForMessage:;
- (void)registerMomentShareURLString:;
@end
