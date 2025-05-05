@interface IESLiveLinkmicTagCombined : NSObject
@property (nonatomic) HTSLiveUser user;
@property (nonatomic) IESLiveMicPosTagInfo mixOperation;
@property (nonatomic) IESLiveUserHighScoreSongTag highScoreSong;
@property (nonatomic) NSString location;
@property (nonatomic) NSArray tagsArray;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)highScoreSong;
- (id)mixOperation;
- (void)setHighScoreSong:;
- (void)setMixOperation:;
- (void)setTagsArray:;
- (id)tagsArray;
- (void)setUser:;
- (id)location;
- (id)user;
- (void)setLocation:;
- (void).cxx_destruct;
@end
