@interface SFIncrementingIVGenerator : NSObject
@property (nonatomic) NSData messageID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)messageID;
- (id)init;
- (id)initWithRandomMessageID;
- (void).cxx_destruct;
- (void)setMessageID:;
- (id)generateIVWithLength:error:;
- (id)initWithMessageID:;
@end
