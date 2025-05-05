@interface TextSequenceInference : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)initWithLength:;
- (void).cxx_destruct;
- (id)target;
- (id)sequence;
- (void)addWordWithInputId:;
- (id)initWithLength:BOS:;
- (void)resetWithBOS:;
@end
