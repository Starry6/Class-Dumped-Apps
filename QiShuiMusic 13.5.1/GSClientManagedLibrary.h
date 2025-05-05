@interface GSClientManagedLibrary : NSObject
@property (nonatomic) NSObject<GSAdditionStoring> storage;
@property (nonatomic) NSString nameSpace;
- (id)nameSpace;
- (id)storage;
- (void).cxx_destruct;
- (id)initWithURL:error:;
- (BOOL)generationsRemove:error:;
@end
