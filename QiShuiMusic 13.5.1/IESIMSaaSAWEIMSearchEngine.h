@interface IESIMSaaSAWEIMSearchEngine : NSObject
@property (nonatomic) NSOperationQueue queue;
@property (nonatomic) @? operation;
@property (nonatomic) @? completion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)searchWithKeyword:;
- (id)completion;
- (id)operation;
- (void)setCompletion:;
- (id)init;
- (void)setOperation:;
- (void).cxx_destruct;
- (void)setQueue:;
- (id)queue;
@end
