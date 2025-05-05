@interface IMMessageDescriptor : NSObject
@property (nonatomic) NSString messageGUID;
@property (nonatomic) NSAttributedString messageBody;
@property (nonatomic) NSArray messageParts;
- (id)messageBody;
- (void).cxx_destruct;
- (id)messageGUID;
- (id)messageParts;
- (id)initWithMessageBody:messageGUID:;
@end
