@interface AWEIMMessageListBackgroundChangInfo : NSObject
@property (nonatomic) BOOL hasBackgroundImage;
@property (nonatomic) BOOL backgroundImageIsBright;
@property (nonatomic) NSString conversationID;
- (void)setBackgroundImageIsBright:;
- (BOOL)backgroundImageIsBright;
- (id)conversationID;
- (void).cxx_destruct;
- (void)setConversationID:;
- (BOOL)hasBackgroundImage;
- (void)setHasBackgroundImage:;
@end
