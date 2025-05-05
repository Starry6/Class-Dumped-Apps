@interface IESLiveSaaSMSequenceMethod : NSObject
+ (BOOL)isFromCarouselWithEventContext:;
+ (BOOL)getIsInOfficialRoomFromTrackContext:;
+ (unsigned long long)getMSeqRoomLayoutWithNewRoom:trackContext:;
+ (unsigned long long)getMSeqRoomLayoutWithRoom:trackContext:;
+ (id)mseqChangeType;
+ (void)setMseqChangeType:;
@end
