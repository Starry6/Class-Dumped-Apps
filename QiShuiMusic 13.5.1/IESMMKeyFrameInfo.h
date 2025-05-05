@interface IESMMKeyFrameInfo : NSObject
@property (nonatomic) NSMutableDictionary KeyFrameWrappDic;
@property (nonatomic) NSLock keyFrameInfoLock;
@property (nonatomic) BOOL isKeyFrameInfoNeedChang;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)KeyFrameWrappDic;
- (id)getKeyFrameInfo;
- (void)completeUpdateAllkeyFrames;
- (unsigned long long)getKeyFrameNum;
- (BOOL)isKeyFrameInfoNeedChang;
- (id)keyFrameInfoLock;
- (BOOL)needRefreshKeyFrame;
- (void)removeallKeyFrameInfo;
- (void)removekeyFrameInfo:;
- (void)setIsKeyFrameInfoNeedChang:;
- (void)setKeyFrameInfoLock:;
- (void)setKeyFrameWrappDic:;
- (void)setkeyFrameInfo:withPts:;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:;
@end
