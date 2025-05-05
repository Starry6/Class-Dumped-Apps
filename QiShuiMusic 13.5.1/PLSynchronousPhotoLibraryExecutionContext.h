@interface PLSynchronousPhotoLibraryExecutionContext : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)performTransactionOnLibrary:transaction:completionHandler:;
@end
