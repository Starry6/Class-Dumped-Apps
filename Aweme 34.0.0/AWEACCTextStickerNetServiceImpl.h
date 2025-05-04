@interface AWEACCTextStickerNetServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)requestPollTokenForTextReading:completionBlock:;
- (id)pollAudioForTextReadingToken:completionBlock:;
- (id)requestAudioForTextReading:textSpeaker:completionBlock:;
@end
