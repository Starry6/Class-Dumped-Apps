@interface IESForestBaseFetcher : NSObject
@property (nonatomic) BOOL isCanceled;
@property (nonatomic) IESForestRequest request;
@property (nonatomic) IESForestKit forestKit;
@property (nonatomic) NSString name;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)fetchResourceWithRequest:completion:;
- (id)forestKit;
- (void)setForestKit:;
- (BOOL)isCanceled;
- (void)dealloc;
- (id)request;
- (void)setIsCanceled:;
- (void).cxx_destruct;
- (void)setRequest:;
- (id)name;
- (void)cancelFetch;
@end
