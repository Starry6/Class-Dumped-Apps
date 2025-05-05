@interface RBMovedDisplayListContents : NSObject
@property (nonatomic) BOOL empty;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} boundingRect;
@property (nonatomic) NSString xmlDescription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_rbPredicate;
- (BOOL)isEmpty;
- (void)dealloc;
- (id)boundingRect;
- (id)_rbContents;
- (id)_rbXmlDocument;
- (void)renderInContext:options:;
- (id)xmlDescription;
- (void).cxx_destruct;
- (void)drawInState:;
- (id).cxx_construct;
- (id)encodedDataForDelegate:error:;
+ (id)decodedObjectWithData:delegate:error:;
@end
