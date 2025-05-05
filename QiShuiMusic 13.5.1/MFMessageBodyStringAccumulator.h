@interface MFMessageBodyStringAccumulator : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isFull;
- (void)dealloc;
- (void)appendString:;
- (void)appendCharacters:length:;
- (void)appendNewline;
- (void)appendRange:ofString:;
- (void)appendInnerTextWithConsumableNode:;
- (id)accumulatedString;
- (void)appendCustomEntityWithTag:stringRepresentation:;
- (id)initWithOptions:lengthLimit:;
@end
