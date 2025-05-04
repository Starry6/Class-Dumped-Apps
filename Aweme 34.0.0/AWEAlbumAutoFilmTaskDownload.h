@interface AWEAlbumAutoFilmTaskDownload : NSObject
- (id)generateRequestModelWithExtraParams:;
- (id)recommendKey;
- (id)recommendListString;
- (id)countListString;
- (id)cursorListString;
- (void)fetchTemplateListWithMaterials:service:extraParams:completion:;
@end
