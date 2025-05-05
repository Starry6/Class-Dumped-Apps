@interface TextSequenceTrain : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)initWithLength:;
- (void).cxx_destruct;
- (id)mask;
- (id)target;
- (id)sequence;
- (void)addWordWithInputId:;
- (void)addWordWithInputId:target:mask:;
@end
