@interface KVEmbeddedProfileWriter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithOutputStream:;
- (BOOL)addItem:error:;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)startProfile:error:;
- (BOOL)startDataset:error:;
- (BOOL)finishDataset:;
- (BOOL)finishProfile:;
@end
