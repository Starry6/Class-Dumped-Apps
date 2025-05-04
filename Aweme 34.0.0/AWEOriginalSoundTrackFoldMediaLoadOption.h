@interface AWEOriginalSoundTrackFoldMediaLoadOption : NSObject
@property (nonatomic) Q loadType;
@property (nonatomic) q cursor;
@property (nonatomic) q count;
- (void)setLoadType:;
- (long long)cursor;
- (void)setCount:;
- (long long)count;
- (void)setCursor:;
- (unsigned long long)loadType;
@end
