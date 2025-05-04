@interface AWEImageAlbumConfigAssembler : NSObject
@property (nonatomic) APCDTOEditComposerModel config;
@property (nonatomic) AWEVideoPublishViewModel repository;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)prepareOnCompletion:;
- (id)initWithConfig:repository:;
- (void)setConfig:;
- (id)repository;
- (id)config;
- (void).cxx_destruct;
- (void)setRepository:;
@end
