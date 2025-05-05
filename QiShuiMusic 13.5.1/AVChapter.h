@interface AVChapter : NSObject
@property (nonatomic) UIImage image;
@property (nonatomic) ^{CGImage=} cgImage;
@property (nonatomic) double startTime;
@property (nonatomic) double duration;
@property (nonatomic) Q number;
@property (nonatomic) NSString title;
- (void)dealloc;
- (unsigned long long)number;
- (unsigned long long)hash;
- (double)startTime;
- (id)valueForUndefinedKey:;
- (void)setCgImage:;
- (id)cgImage;
- (void)setValue:forUndefinedKey:;
- (id)title;
- (void).cxx_destruct;
- (double)duration;
- (BOOL)isEqual:;
- (id)image;
- (id)copyWithZone:;
- (id)initWithStartTime:duration:number:title:imageFaultBlock:;
- (void)setCGImage:;
+ (id)playbackChapterWithStartTime:duration:number:title:imageFaultBlock:;
+ (id)chapterAtTime:inChapters:;
@end
